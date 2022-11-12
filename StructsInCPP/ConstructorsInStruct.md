# Constructors in structure


```c++
struct sample
{
	private:
		int _a;
		int _b;
	public:
		sample():_a(0), _b(0){}
		sample(int va, int vb):_a(va), _b(vb){}

		void showVal();
};

int main(void)
{
	sample p1, p2(12, 13);

	cout<<"\nStructure variable 1:\n";
	p1.showVal();

	cout<<"\nStructure variable 2:\n";
	p2.showVal();

	return 0;
}
```

Structures in C++, also have constructors and destructors!! These constructors and destructors are just like class constructors and destructors.

I won't talk much about them because you already know about constructors and destructors!!

---
