**METHOD OF INHERITANCE &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; ORDER OF EXECUTION**
```C++
class B: public A									A(); base constructor
{											B(); derived constructor
};
```

```C++
class A: public B, public C								B(); base(first)
{											C(); base(second)
};											A(); derived
```

```C++
class A: public B, virtual public C							C(); virtual base
{											B(); ordinary base
};											A(); derived
```
