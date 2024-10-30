#include <iostream>
#include <vector>
using namespace std;

struct S
{
    string desc;
    bool done;
};

vector<S> t;

void add()
{
    S newT;
    cin.ignore();
    cout << "Enter task: ";

    getline(cin, newT.desc);
    newT.done = false;
    t.push_back(newT);
}

void view()
{
    for (int i = 0; i < t.size(); ++i)
    {
        cout << i + 1 << ". " << t[i].desc;
        if (t[i].done)
        {
            cout << "     Done" << endl;
        }
        else
        {
            cout << "     pending" << endl;
        }
    }
}

void mark()
{
    int i;
    view();
    cout << "Enter task number to mark done: ";
    cin >> i;
    if (i > 0 && i <= t.size())
        t[i - 1].done = true;
}

void remove()
{
    int i;
    view();
    cout << "Enter task number to remove: ";
    cin >> i;
    if (i > 0 && i <= t.size())
        t.erase(t.begin() + i - 1);
}

int main()
{
    int ch;
    while (1)
    {
        cout << "1 Add" << endl;
        cout << "2 View" << endl;
        cout << "3 Mark done" << endl;
        cout << "4 Remove" << endl;
        cout << "5 Exit" << endl;
        cin >> ch;
        cin.ignore();
        if (ch == 1)
            add();
        else if (ch == 2)
        {
            view();
        }
        else if (ch == 3)
        {
            mark();
        }
        else if (ch == 4)
        {
            remove();
        }
        else if (ch == 5)
        {
            break;
        }
    }
    return 0;
}
