#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string,pair<int,int> >a, pair<string,pair<int,int> >b){
	if(a.second.first==b.second.first){ 
		return a.second.second >b.second.second;	//생년월일이 더 느린 사람이 높은 우선순위를 가짐 
	} 
	else{
		return a.second.first>b.second.first;		//성적이 다르다면, 성적이 높은 학생이 우선순위 
	}		//이렇게 표현 가능한거?? 
}
	

int main(void){
    vector<pair<string, pair<int, int> > > v;   //pair안에 pair가 또 들어가게
    v.push_back(pair<string, pair<int, int> >("박준우",pair<int, int>(90, 19991110)));
    v.push_back(pair<string, pair<int, int> >("나동빈",pair<int, int>(80, 19961110)));
    v.push_back(pair<string, pair<int, int> >("백준",pair<int, int>(90, 19801110)));
    
    sort(v.begin(),v.end() ,compare);	//compare로 정렬 기준을 말해줌 
    //pair를 이중으로 사용해 정렬기준이 2개일 때도 효과적으로 정렬 
    for(int i=0;i<v.size();i++){
    	cout << v[i].first << ' ';
	}
    return 0;
}