class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> q;

        for(const string &c  : tokens){
            if(c=="+" || c=="-" || c=="*" || c=="/"){
            if(c=="+"){
                int num2=q.top();
                q.pop();
                int num1=q.top();
                q.pop();
                q.push(num1+num2);
            }
            if(c=="-"){
                int num2=q.top();
                q.pop();
                int num1=q.top();
                q.pop();
                q.push(num1-num2);
            }
            if(c=="*"){
                int num2=q.top();
                q.pop();
                int num1=q.top();
                q.pop();
                q.push(num1*num2);
            }
            if(c=="/"){
                int num2=q.top();
                q.pop();
                int num1=q.top();
                q.pop();
                q.push(num1/num2);
            }
            }
            else{
                q.push(stoi(c));
            }
            
        }
        return q.top();

    }
};
