#include <iostream>
using namespace std;

int febinoci(int n)
{

  // base con
  if (n == 0)
  {
    return 0;
  }

  if (n == 1)
  {
    return 1;
  }
  int ans = febinoci(n - 1) + febinoci(n - 2);

  // cout<<ans<<"  ";
  return ans;
}

void printfebonoci(int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << febinoci(i) << ' ';
  }
}

int main()
{
  int n;
  cout << " enter n of febinoci series " << endl;
  cin >> n;
  // cout<<endl;
  printfebonoci(n);
  cout<<endl<<endl<<n<< " of frbinoci series is = "<<febinoci(n);
  return 0;
}