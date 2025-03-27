class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);
        cout << sz << endl;
        ListNode *temp = head;
        for (int i = 1; i <= sz / 2; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};