// class Solution {
//   public:
//     string findOrder(vector<string> &words) {
//         int N = words.size();
//         int K = 26;

//         vector<vector<int>> adj(K);
//         vector<int> present(K, 0);

//         // Mark present characters
//         for (auto& word : words) {
//             for (char ch : word) {
//                 present[ch - 'a'] = 1;
//             }
//         }

//         // Build graph based on the order of characters
//         for (int i = 0; i < N - 1; i++) {
//             string& w1 = words[i];
//             string& w2 = words[i + 1];
//             int len = min(w1.size(), w2.size());

//             bool found = false;
//             for (int j = 0; j < len; j++) {
//                 if (w1[j] != w2[j]) {
//                     adj[w1[j] - 'a'].push_back(w2[j] - 'a');
//                     found = true;
//                     break;
//                 }
//             }

//             // ❗ Invalid order like ["abc", "ab"]
//             if (!found && w1.size() > w2.size()) {
//                 return "";
//             }
//         }

//         // Topological Sort using Kahn's Algorithm
//         vector<int> indegree(K, 0);
//         for (int i = 0; i < K; i++) {
//             for (int v : adj[i]) indegree[v]++;
//         }

//         queue<int> q;
//         for (int i = 0; i < K; i++) {
//             if (present[i] && indegree[i] == 0) q.push(i);
//         }

//         string res = "";
//         while (!q.empty()) {
//             int u = q.front(); q.pop();
//             res += (char)(u + 'a');
//             for (int v : adj[u]) {
//                 indegree[v]--;
//                 if (indegree[v] == 0) q.push(v);
//             }
//         }

//         // 🔍 Check if result includes all used characters
//         int totalChars = 0;
//         for (int i = 0; i < K; i++) totalChars += present[i];
//         if (res.size() != totalChars) return ""; // Cycle or incomplete ordering

//         return res;
//     }
// };
