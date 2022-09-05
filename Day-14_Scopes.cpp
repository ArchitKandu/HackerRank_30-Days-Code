#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Difference {
    private:
    vector<int> elements;
  	public:
  	int maximumDifference;
	Difference(vector<int> arr){
        elements=arr;
    }
    void computeDifference(){
        maximumDifference=0;
        int diff=0;
        for(int i=0;i<elements.size();i++){
            for(int j=0;j<elements.size();j++){
                if(elements.at(i)>elements.at(j)) diff=elements.at(i)-elements.at(j);
                else diff=elements.at(i)-elements.at(j);
                if(maximumDifference<diff) maximumDifference=diff;
            }
        }
    }
};
int main() {
    int N;
    cin >> N;
    vector<int> a;
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;   
        a.push_back(e);
    }
    Difference d(a);
    d.computeDifference();
    cout << d.maximumDifference;    
    return 0;
}
