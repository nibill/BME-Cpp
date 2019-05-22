# BME-Cpp

## Output EX01 ##

## Output EX02 ##

## Output EX03 ##

## Output EX04 ##

## Output EX05 ##

## Output EX06 ##

    Choose the to be executed exercise:
    1 - CheckingAccount exercise
    2 - Code snippet questions
    1
    Initial amount: 1000
    Initial fee: 0.5
    Current balance: 1250
    Current balance: 249.5
    Warning: Not enough funds
    Current balance: 0
    2
    ex 2.2:
    --------------------------------------
    Output for snipped a: Base(), Derived() Base(), ~Base(), Derived(), ~Base()
    Output for snipped b: Program doesn't compile because m_x is private
    One could change m_x to protected, then the output would be:
    Base(), Derived(), Dervide: 5, ~Derived(), ~Base()

    ex 2.3:
    --------------------------------------
    General order is: Base(), Derived(), ~Derived(), ~Base()
    --------------------------------------
    create ABC in stack
    A()
    C()
    B()
    ABC()
    create ABC in heap
    A()
    C()
    B()
    ABC()
    delete ABC in heap
    ~ABC()
    ~B()
    ~C()
    ~A()
    leave test()
    ~ABC()
    ~B()
    ~C()
    ~A()

    ex 2.4:
    --------------------------------------
    There are two solutions - which one is preferable and why
    Access Levels and Scope. With Scope set to  private, one can
    access a class more granular, using public  access methods.
    --------------------------------------------    -------------------
    create C
    A()
    B()
    C()
    leave test()
    ~C()
    ~B()
    ~A()


## Output EX07 ##
	

