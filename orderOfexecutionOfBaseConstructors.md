**METHOD OF INHERITANCE *tabspace* *tabspace* ORDER OF EXECUTION**
```C++
class B:public A									A(); base constructor
{											B(); derived constructor
};
```

```C++
class A:public B, public C								B(); base(first)
{											C(); base(second)
};											A(); derived
```

```C++
classA:public B, virtual public C							C(); virtual base
{											B(); ordinary base
};											A(); derived
```