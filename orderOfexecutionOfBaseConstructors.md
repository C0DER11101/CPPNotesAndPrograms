**METHOD OF INHERITANCE &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; ORDER OF EXECUTION**
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


_Found this link to be extremely helpful!!_
[This one](https://stackoverflow.com/questions/40023013/tab-space-in-markdown "How to add tabspace in .md files")
