
class MyStack {
    queue<int> q;

public:
    MyStack() {
    }

    void push(int x) {
        int n = q.size();

        q.push(x);

        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
      if(q.size()==0){
        return true;
      }else{
        return false;
      }
    }
};
