# About [test22.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test22.cpp)

This error, highlights one more importance of templates, and that is, if you have a member function of a template class which returns an object of class type, then while defining that function outside of the class, you have to put the template argument with returntype as well.

Example:

```c++
template<class T>
class sample
{
	T*_a;
	int size;

	public:

	sample():_a(NULL), _size(0){}

	sample(int size):_size(size)
	{
		_a=new T[_size];
	}

	void initialize();
	sample&operator+(sample&);
	void show();
};

template<class T>
void sample<T>::initialize()
{
	// code
}

template<class T>
sample<T>& sample<T>::operator+(sample&s)
{
	// code
}

template<class T>
void sample<T>::show()
{
	// code
}

int main(void)
{
	sample<T>a(5), b(5);

	a.initialize();
	b.initialize();

	a.show();
	b.show();

	a=a+b;

	a.show();
	b.show();

	return 0;
}
```


```
template<class T>
sample<T>& sample<T>::operator+(sample&s)
{
	// code
}
```
Here, the <T> between `sample` and `&` is necessary, otherwise the compiler will yell at you!!

Here is the image of test22.cpp where the opposite of what was just said was done.


![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/TemplateError.png?raw=true)

---
