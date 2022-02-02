
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pat[1000005],txt[1000005],arr[1000005],arr2[1000005],lps[1000005];
void computeLPSArray(ll M);

// Prlls occurrences of txt[] in pat[]
ll KMPSearch(ll M,ll N)
{
	//ll M = strlen(pat);
	//ll N = strlen(txt)
    ll cnt=0;
	// create lps[] that will hold the longest prefix suffix
	// values for pattern


	// Preprocess the pattern (calculate lps[] array)
	computeLPSArray(M);

	ll i = 0; // index for txt[]
	ll j = 0; // index for pat[]
	while (i < N) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			cnt++;
			j = lps[j - 1];
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i]) {
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
	return cnt;
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(ll M)
{
	// length of the previous longest prefix suffix
	ll len = 0;

	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	ll i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0) {
				len = lps[len - 1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

// Driver program to test above function
int main()
{
	//ll txt[]={0,2,0,1,0,2,0},patt[]={0,2,0};

	//cout<<KMPSearch(patt, txt,3,7)<<endl;
	ll n,m,i;
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>arr[i];
	for(i=0;i<m;i++) cin>>arr2[i];
	if(m==1)
    cout<<n<<endl;
    else if(n<m)
        cout<<0<<endl;
    else
    {
        for(i=1;i<n;i++)
            txt[i-1]=arr[i]-arr[i-1];
        for(i=1;i<m;i++)
            pat[i-1]=arr2[i]-arr2[i-1];
        cout<<KMPSearch(m-1,n-1)<<endl;
    }
	return 0;
}
