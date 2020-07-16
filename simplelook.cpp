/*
 * simplelook.cpp
 * 
 * Copyright 2019 sahil <sahil@sahil-Vivo-15-ASUS>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}
-------------------greatest common divisor-----------------
To compute 
gcd(48,18), divide 48 by 18 to get a quotient of 2 and a remainder of 12.
Then divide 18 by 12 to get a quotient of 1 and a remainder of 6. 
Then divide 12 by 6 to get a remainder of 0, which means that 6 is the gcd.
#include <iostream>
#define FIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
    FIO
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a;
	    cin>>b;
	    int r;
	    int c;
	    if(a>b){
	        r=b;
	        c=a;
	    }
	    else{
	        r=a;
	        c=b;
	    }
	    int q=1;
	    int s,m;
	    while(q!=0){
	        q=c%r;
	        s=r;
	        m=r;
	        r=(c%r);
	        c=m;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
