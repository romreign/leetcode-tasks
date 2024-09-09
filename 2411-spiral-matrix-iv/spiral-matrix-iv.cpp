/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        auto totopRow = m - 1, tobotRow = 0, torightCol = n - 1, toleftCol = 0; 

        while(head)
        {
            for (auto col = toleftCol; col <= torightCol && head; col++) // to right
            {
                matrix[tobotRow][col] = head->val;
                head = head->next;
            }
            tobotRow++;

            for (auto row = tobotRow; row <= totopRow && head; row++) // to down
            {
                matrix[row][torightCol] = head->val;
                head = head->next;
            }
            torightCol--;

            for (auto col = torightCol; col >= toleftCol && head; col--) // to left
            {
                matrix[totopRow][col] = head->val;
                head = head->next;
            }
            totopRow--;

            for (auto row = totopRow; row >= tobotRow && head; row--) // to up
            {
                matrix[row][toleftCol] = head->val;
                head = head->next;
            }
            toleftCol++;
        }
        return matrix;
    }
};