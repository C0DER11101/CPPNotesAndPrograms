# About

This keyword is best explained with the following example:

```c++
class sample
{
	mutable int _m;

	public:
	sample():_m(0){}
	sample(int val):_m(val){}
	void change() const;
	void show();
};

void sample::change()
{
	m+=10;
}

void sample::show()
{
	cout<<"m = "<<m<<"\n";
}

int main(void)
{
	sample s(10);
	s.change();
	s.show();

	return 0;
}
```

---
