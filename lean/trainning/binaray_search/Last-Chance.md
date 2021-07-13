Tóm tắt đề bài: https://codeforces.com/contest/137/problem/E

Cho một chuỗi s, bao gồm các kỹ tự từ 'a' tới 'z' viết thường hoặc viết hoa. Đếm số lượng chuỗi tốt dài nhất trong chuỗi s ban đầu đã cho.
Được biết  một chuỗi tốt nếu số nguyên âm trong chuỗi nhiều hơn số phụ âm không quá hai lần. Giả sự gọi v là số nguyên âm và c là số phụ âm của chuỗi đó thì v <= 2*c.
Bạn cần đưa ra số chuỗi con tốt dài nhất của chuỗi ban đầu. Biết rằng các kỹ tự nguyên ấm có thể là " a ", " e ", " i ", " o ", " u " viết hoa hoặc thường.             
----------------------------------------------------------------------------------------------------------------------------------------------------------------------

c





Chương trình 1: C++

#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
#define maxn 200000 + 10
#define oo 1000000000
char s[maxn];
int n,s1[maxn],s2[maxn];
int m = 1,dl[maxn];
int find( int k )
{
    int l = 1,r = m,mid;
    while( l < r )
        {
            mid = (l+r)>>1;
            if( s1[dl[mid]]-2*s2[dl[mid]] < k )
                l = mid+1;
            else r = mid;
        }
    return dl[l];
} 
int main()
{
    int i,j,ans1 = 0,ans2 = 0;
    scanf("%s",s+1);
    n = strlen(s+1);
    dl[1] = 0;
    for( i = 1 ; i <= n ; ++i )
        {
            s1[i] = s1[i-1];
            s2[i] = s2[i-1];
            if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
                ++s1[i];
            else ++s2[i];
            if( s1[i]-2*s2[i] > s1[dl[m]]-2*s2[dl[m]] )
                dl[++m] = i;
            j = find(s1[i]-2*s2[i]);
            if( i-j > ans1 )
                ans1 = i-j, ans2 = 0;
            if( i-j == ans1 )
                ++ans2;
        }
    if( ans1 )
        printf("%d %d\n",ans1,ans2);
    else printf("No solution\n");
    return 0;
}
