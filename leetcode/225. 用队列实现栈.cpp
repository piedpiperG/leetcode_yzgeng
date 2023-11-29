class MyStack 
{
private:
	queue<int>q1;
	queue<int>q2;
public:
    MyStack() {
	
    }
    
    void push(int x) {
		q1.push(x);
    }
    
    int pop() {
    	int	ans;
		while(q1.size()>1)
		{
			int	temp=q1.front();
			q2.push(temp);
			q1.pop();
		}
		ans=q1.front();
		q1.pop();
		while(!q2.empty())
		{
			int	temp=q2.front();
			q1.push(temp);
			q2.pop();
		}
		return	ans;
    }
    
    int top() {
		int	ans;
		while(q1.size()>1)
		{
			int	temp=q1.front();
			q2.push(temp);
			q1.pop();
		}
		ans=q1.front();
		q2.push(ans);
		q1.pop();
		while(!q2.empty())
		{
			int	temp=q2.front();
			q1.push(temp);
			q2.pop();
		}
		return	ans;
	}
    
    
    bool empty() {
		if(q1.empty())
			return	true;
		else	
			return	false;
    }

};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
