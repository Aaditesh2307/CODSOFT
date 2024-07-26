#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Task
{
    int status = 0;
    string Task;

public:
    void input()
    {
        cout << "\nENTER TASK\n";
        cin.ignore();
        getline(cin, Task);
        cout << "\n\n";
    };
    void TaskCompleted()
    {
        status = 1;
    }
    void display()
    {
        cout << Task << "\t" << (status == 1 ? "COMPLETED" : "NOT COMPLETED") << "\n\n\n";
    }
};

int main()
{
    vector<Task> List;
    vector<Task>::iterator it;
    int choice;
    Task object;
    int b;

    cout << "\t\t    WELCOME\n\t\tTO DO LIST APP\n\n\n";
    while (true)
    {

        cout << "1.Add Task\n2.View Tasks\n3.Mark Task as Completed\n4.Delete Task\n5.Exit\n";
        cin >> choice;
        cout << "\n";
        switch (choice)
        {
        case 1:
            object.input();
            List.push_back(object);
            break;
        case 2:
            for (int i = 0; i < List.size(); i++)
            {
                cout << i + 1 << ". ";
                List[i].display();
            }
            break;

        case 3:
            cout << "\nENTER TASK NUMBER\n";
            cin >> b;
            b--;
            List[b].TaskCompleted();
            break;
        case 4:
            cout << "\nENTER TASK NUMBER\n";
            cin >> b;
            b--;
            it = List.begin() + b;
            List.erase(it);
            break;

        case 5:

            cout << "THANK YOU FOR USING!!";
            return 0;
        default:
            break;
        }
    }
}