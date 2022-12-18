/* Given an array/list of integer numbers 'CHOCOLATES' of size 'N', where each value of the array/list represents the number of chocolates in the packet. There are ‘M’ number of students and the task is to distribute the chocolate to their students. Distribute chocolate in such a way that:
1. Each student gets at least one packet of chocolate.
2. The difference between the maximum number of chocolate in a packet and the minimum number of chocolate in a packet given to the students is minimum.
Example :
Given 'N' : 5 (number of packets) and 'M' : 3 (number of students)

And chocolates in each packet is : {8, 11, 7, 15, 2}

All possible way to distribute 5 packets of chocolates among 3 students are -

( 8,15, 7 ) difference of maximum-minimum is ‘15 - 7’ = ‘8’
( 8, 15, 2 ) difference of maximum-minimum is ‘15 - 2’ = ‘13’ 
( 8, 15, 11 ) difference of maximum-minimum is ‘15 - 8’ = ‘7’
( 8, 7, 2 ) difference of maximum-minimum is ‘8 - 2’ = ‘6’
( 8, 7, 11 ) difference of maximum-minimum is ‘11 - 7’ = ‘4’
( 8, 2, 11 ) difference of maximum-minimum is ‘11 - 2’ = ‘9’
( 15, 7, 2 ) difference of maximum-minimum is ‘15 - 2’ = 13’
( 15, 7, 11 ) difference of maximum-minimum is ‘15 - 7’ = ‘8’
( 15, 2, 11 ) difference of maximum-minimum is ‘15 - 2’ = ‘13’
( 7, 2, 11 ) difference of maximum-minimum is ‘11 - 2’ = ‘9’

Hence there are 10 possible ways to distribute ‘5’ packets of chocolate among the ‘3’ students and difference of combination (8, 7, 11) is ‘maximum - minimum’ = ‘11 - 7’ = ‘4’ is minimum in all of the above.
Input Format :
The first line of input contains an integer ‘T’ denoting the number of test cases.
The next ‘2*T’ lines represent the ‘T’ test cases.

The first line of each test case contains two space-separated integers ‘N’ denoting the number of packets of chocolate and ‘M’ denotes the number of students. 

The second line of each test case contains ‘N’ space-separated integers denoting the number of chocolate in each of ‘N’ packets.
Output Format :
For each test case, print the minimum difference of the chocolates contained in the packets distributed to the students.
Note :
You don't need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 50
2 <= M <= N <= 10^4
1 <= CHOCOLATES[i] <= 10^9


Time Limit : 1 sec */



#include<bits/stdc++.h>
using namespace std;
void subseq(int index,vector<int> &chocoPack,vector<int> &dummy,int n,int students,vector<int> &ways){
    if(index >= n){
        if(dummy.size() == students){
            cout<<"[ ";
            for(auto i: dummy) cout <<i<<" ";
            cout<<"]";
            int max = *max_element(dummy.begin(),dummy.end());
            int min = *min_element(dummy.begin(),dummy.end());
            cout<<" max: "<<max<<" "<<"min: "<<min<<endl;
            /* if(!(find(ways.begin(), ways.end(), (max-min)) != ways.end())) */
            ways.push_back(max-min) ;  
        }
        return;
    }
    dummy.push_back(chocoPack[index]);
    subseq(index+1,chocoPack,dummy,n,students,ways);

    dummy.pop_back();
    subseq(index+1,chocoPack,dummy,n,students,ways);
}
int main()
{
    vector<int> chocoPack = {8, 11, 7, 15, 2};
    vector<int> dummy;
    vector<int> ways;
    int students = 3;
    subseq(0,chocoPack,dummy,chocoPack.size(),students,ways);
    cout<<"No of the choco packs can be distributed is :"<<*min_element(ways.begin(),ways.end())<<endl;
    return 0;
}



/* chocolates distribution is a very popular example for array minimisation problems which is most frequently asked in exams */