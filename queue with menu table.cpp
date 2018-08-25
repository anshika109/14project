 #include<iostream>
using namespace std;
int main(){
	int queue1[10];
	int choice,i,n;
	int front=-1,rear=-1,data;

	cout<<"enter the no of elements"<<endl;
	cin>>n;
/*	for(i=0;i<n;i++){
		cin>>data;
	}
	for(i=front;i<=rear;i++)
	{
		cout<<queue[i]<<" ";
	}*/
		cout<<"1.For Insertion"<<endl;
		cout<<"2.For Deletion"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				{
				int ins_ele,i;
				cout<<"insert the element in queue"<<endl;
				for(i=0;i<n;i++){
				cin>>ins_ele;
			}
				if(rear==9)
				cout<<"overflow"<<endl;
				else if(front==-1){
					front=0;
			        rear=0;
					queue1[rear]=ins_ele;}
			    else{
					rear=rear+1;
					queue1[rear]=ins_ele;
			       }
			for(i=front;i<=rear;i++){
						cout<<queue1[i]<<" ";
				}
				break;
				}
				
			case 2:
				{
				int i;
				if(front==-1){
				cout<<"underflow"<<endl;
				}				
				else if(front==rear){
					front=-1;
					rear=-1;
				}
				
				else{
					front=front+1;
				}
				for(i=front;i<=rear;i++){
						cout<<queue1[i]<<" ";
				}
				break;
				}
				
			default:
				cout<<"wrong choice"<<endl;
	}
	return 0;
}

