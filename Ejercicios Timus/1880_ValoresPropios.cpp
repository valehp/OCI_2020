#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v1(n);
	for(int i=0; i<n; ++i){
		cin >> v1[i];
	}
	cin >> n;
	vector<int> v2(n);
	for(int i=0; i<n; ++i){
		cin >> v2[i];
    }
  	cin >> n;
  	vector<int> v3(n);
  	for(int i=0; i<n; ++i){
		cin >> v3[i];
  	}
  
  	vector<int> v4;
  	for(int i=0; i<v1.size(); ++i){
	  	for(int j=0; j<v2.size(); ++j){
			if(v1[i]<=v2[j]){
		  		if(v1[i]==v2[j]) v4.push_back(v1[i]);
		  		break;
			}  
		}
  	}
	int cont=0;
	for(int i=0; i<v4.size(); ++i){
	  	for(int j=0; j<v3.size(); ++j){
			if(v4[i]<=v3[j]){
		  		if(v4[i]==v3[j]) ++cont;
		  		break;
			}  
		}
  	}
	cout << cont;
  return 0;
}