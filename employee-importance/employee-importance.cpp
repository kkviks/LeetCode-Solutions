/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        Employee* our_emp;
        for(auto &emp:employees){
            if(emp->id==id){
                our_emp = emp;
                break;
            }
        }
        
        return solve(our_emp, employees);
    }
    
    int solve(Employee* emp, vector<Employee*> const &employees){
        
        int sum = emp->importance;
        
        for(int id:emp->subordinates){
            sum += getImportance(employees, id);
        }
        
        return sum;
    }
};