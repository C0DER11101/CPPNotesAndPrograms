# Pointers to derived classes(Working)

- **Pointers to objects of base class are type-compatible with pointers to objects of a derived class.**

_So, single pointer variable can be made to point to objects of different classes._


Consider an example:

```C++
// header files included

class A
{
	public:
		void greet()
		{
			cout<<"\nHello user, this is class A\n";
		}

};

class B:public A
{
	public:
		void greet()
		{
			cout<<"\nHello user, this is class B\n";
		}
};
```

Now, we will create some objects of these classes.

```C++
int main(void)
{
	A *ptr=NULL;
	A a;
	B b;

	ptr=&a;
	ptr->greet(); // line 1
	((B*)ptr)->greet(); // line 2

	ptr=&b;
	ptr->greet(); // line 3
	((B*)ptr)->greet(); // line 4

	return 0;
}
```

```*ptr``` is a pointer to object of class ```A```.

```line 1``` calls ```greet()``` of class ```A```.
```((B*)ptr)``` basically typcasts the pointer ```ptr``` to a pointer to class ```B```, so that it can access the public members of class
```B```.

```line 3``` is special!!

```ptr``` may store the address of object of class ```B``` but ```line 3``` will always call the function of class ```A``` because ```ptr```
is a pointer to object of class ```A``` by default.

We will have to typecast it to call member functions of class ```B```.

_This is how pointers to derived classes work._
