#include<iostream>
using namespace std;

class node {
public:
    string mname, actor, director, year;
    float rate;
    node* left;
    node* right;
    node(string m, string a, string d, string y, float r) {
        left = NULL;
        right = NULL;
        mname = m;
        actor = a;
        year = y;
        director = d;
        rate = r;
    }

};

node* insert1(node* root, string movie, string actor, string director, string year, float r) {
    if (root == NULL) {
        return new node(movie, actor, director, year, r);
    }
    else if (root->mname == movie) {
        return root;
    }
    else if (root->rate > r) {
        root->left = insert1(root->left, movie, actor, director, year, r);
    }
    else {
        root->right = insert1(root->right, movie, actor, director, year, r);
    }
    return root;
}
node* innerordersucc(node* root) {
    node* temp = root->right;
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}
node* delete1(node* root, float f) {
    if (root == NULL) {
        return root;
    }

    if (f < root->rate) {
        root->left = delete1(root->left, f);
    }
    else if (f > root->rate) {
        root->right = delete1(root->right, f);
    }
    else {
        if (root->left == NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = innerordersucc(root);
        root->rate = temp->rate;
        root->right = delete1(root->right, temp->rate);
    }

    return root;

}
void inorder(node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << "MOVIE NAME:" << root->mname << endl;
    cout << "ACTOR:" << root->actor << endl;
    cout << "DIRECTOR:" << root->director << endl;
    cout << "YEAR:" << root->year << endl;
    cout << endl;
    inorder(root->right);
}
float minvalue(node* root) {
    node* temp = root;
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp->rate;
}

void SearchByYear(node* root, string& year) {
    if (root == NULL) {
        return;
    }
    SearchByYear(root->left, year);
    if (year == root->year) {
        cout << root->mname << endl;
    }
    SearchByYear(root->right, year);
}

int main() {
    int ch; string mname, actor, director, year; node* root = NULL; float r, u;
    do {
        cout << "1.INSERT" << endl;
        cout << "2.DISPLAY" << endl;
        cout << "3.DELETE" << endl;
        cout << "4.Search Movies" << endl;
        cout << "Enter the option:";
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "MOVIE NAME:";
            cin >> mname;
            cout << "ACTOR:";
            cin >> actor;
            cout << "DIRECTOR:";
            cin >> director;
            cout << "YEAR:";
            cin >> year;
            cout << "RATING:";
            cin >> r;
            root = insert1(root, mname, actor, director, year, r);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            u = minvalue(root);
            //cout<<u;
            root = delete1(root, u);
            break;
        case 4:
            cout << "Please enter year: ";
            cin >> year;
            SearchByYear(root, year);
        default:
            cout << "Enter valid option" << endl;
        }

    } while (ch != 5);
}
