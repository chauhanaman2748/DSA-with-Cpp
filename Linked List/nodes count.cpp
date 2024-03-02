/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
{
    // Write your code here
    if (head == nullptr)
        return 0;

    Node *temp = head;
    int count = 1;

    while (temp->next != nullptr)
    {
        temp = temp->next;
        count++;
    }

    return count;
}