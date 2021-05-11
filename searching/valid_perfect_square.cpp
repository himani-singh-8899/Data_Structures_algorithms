/*AS we all know sum of consecutive odd number( starting from 1 )always led to perfect square
for ex
1 perfect square
1+3 =4 perfect square
1+3+5=9 perfect square
1+3+5+7= 16 perfect square
Input: num = 16
Output: true
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
    int a=1;
while(num>0)
{
num=num-a;
a=a+2;
}
return num==0;

}
};
