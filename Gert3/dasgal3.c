#include <stdio.h>

int main(){
	int n, a, b, c, d, e, f, a1=1, b1=1, c1=1, d1=1, e1=1, f1=1, max;
	scanf("%d",&n);
		a = n / 100000;
		b = (n / 10000) % 10;
		c = (n / 1000) % 10;
		d = (n / 100) % 10;
		e = (n / 10) % 10;
		f = n % 10;
	if(n<1000000 && n>=100000)
	{
	if(a == b)
		a1++;
	if(a == c)
		a1++;
	if(a == d)
		a1++;
	if(a == e)
		a1++;
	if(a == f)
		a1++;

    if(b == a)
        b1++;
    if(b == c)
        b1++;
    if(b == d)
        b1++;
    if(b == e)
        b1++;
    if(b == f)
        b1++;

	if(c == b)
		c1++;
	if(c == a)
		a1++;
	if(c == d)
		c1++;
	if(c == e)
		c1++;
	if(c == f)
		c1++;

    if(d == b)
        d1++;
    if(d == c)
        d1++;
    if(d == a)
        d1++;
    if(d == e)
        d1++;
    if(d == f)
        d1++;

	if(e == b)
		e1++;
	if(e == c)
		e1++;
	if(e == d)
		e1++;
	if(e == a)
		e1++;
	if(e == f)
		e1++;

    if(f == b)
        f1++;
    if(f == c)
        f1++;
    if(f == d)
        f1++;
    if(f == e)
        f1++;
    if(f == a)
        f1++;
	}
else if(n<100000 && n>=10000)
	{
		a1=0;
		if(f == b)
			f1++;
		if(f == e)
			f1++;
		if(f == c)
			f1++;
		if(f == d)
			f1++;

        if(b == f)
            b1++;
        if(b == c)
            b1++;
        if(b == d)
            b1++;
        if(b == e)
            b1++;

		if(c == b)
			c1++;
		if(c == f)
			c1++;
		if(c == d)
			c1++;
		if(c == e)
			c1++;

        if(d == b)
            d1++;
        if(d == c)
            d1++;
        if(d == f)
            d1++;
        if(d == e)
            d1++;

		if(e == b)
			e1++;
		if(e == c)
			e1++;
		if(e == d)
			e1++;
		if(e == f)
			e1++;
	}
else if(n<10000 && n>=1000)
	{
		a1=0;
		b1=0;
		if(f == e)
			f1++;
		if(f == c)
			f1++;
		if(f == d)
			f1++;

        if(e == f)
            e1++;
        if(e == c)
            e1++;
        if(e == d)
            e1++;

		if(c == f)
			c1++;
		if(c == e)
			c1++;
		if(c == d)
			c1++;

        if(d == e)
            d1++;
        if(d == c)
            d1++;
        if(d == f)
            d1++;
	}
else if(n < 1000 && n >= 100)
	{
		a1=0;
		b1=0;
		c1=0;
		if(f == e)
			f1++;
		if(f == d)
			f1++;

        if(e == f)
            e1++;
        if(e == d)
            e1++;

		if(d == e)
			d1++;
		if(d == f)
			d1++;
	}
else if(n < 100 && n >= 10)
	{
		a1=0;
		b1=0;
		c1=0;
		d1=0;
		if(f == e)
			f1++;
		if(e == f)
			e1++;
	}
else if(n < 10 && n >= 1)
	{
		a1=0; b1=0; c1=0; d1=0; e1=0;
		f1=1;
	}
    max=a1;
	if(max < b1)
		max = b1;
	if(max < c1)
		max = c1;
	if(max < d1)
		max = d1;
	if(max < e1)
		max = e1;
	if(max < f1)
		max = f1;

    if(max == a1)
        printf("Hamgiin ih orson ni: %d",a);
    else if(max == b1)
        printf("Hamgiin ih orson ni: %d",b);
    else if(max == c1)
        printf("Hamgiin ih orson ni: %d",c);
    else if(max == d1)
        printf("Hamgiin ih orson ni: %d",d);
    else if(max == e1)
        printf("Hamgiin ih orson ni: %d",e);
    else if(max == f1)
        printf("Hamgiin ih orson ni: %d",f);
	return 0;
}
