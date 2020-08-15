/*
Time Complexcity: O(NLOGN)
*/
#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int age;
    int marks;
    string rollNumber;
    student(string name, int age, int mark, int rollNumber):name(name),age(age),mark(mark), rollNumber(rollNumber){} 
} student;

vector<string> sort_on_key;

auto getval(struct obj, string key){
    switch (key)
    {
    case "name":
        return obj.name;
        break;
    case "age":
        return obj.age;
        break;
    case "mark":
        return obj.mark;
        break;
    case "rollNumber":
        return obj.rollNumber;
        break;
    default:
        return '';
        break;
    }
}

bool compare(student a, student b){
    // vector<int> aval,bval
    bool flag = false;
    for(int i = 0; i< sort_on_key.size();i++){
        key = sort_on_key[i];
        if (getval(a, key) != getval(b,key))
            return getval(a, key) > getval(b, key);
    }
    return false;
}


vector<*student> sort(vector<*student> arr){
    sort(arr.begin(), arr.end(), compare);
    return arr;
}

int main(){
    vector<*student> arr;
    sort_on_key = {"age", "name", "marks"};
    sort(arr);
}

