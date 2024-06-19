#include <GLFW/glfw3.h>

#pragma once
// Base class
class Object {
public:
    virtual void OnCollisionEnter(Object& other) {

    }
    void player();
    void faltfrom();
    void Agasee();
    void Bgasee();
    void Cgasee();
};

// Derived classes
class Player : public Object {
public:
    void OnCollisionEnter(Object& other) override 
    {
        
    }

};

class EnemyBlock : public Object {
public:
    void OnCollisionEnter(Object& other) override {
    }
};

class Floor : public Object {
public:
    void OnCollisionEnter(Object& other) override {
    }
};

class Star : public Object {
public:
    void OnCollisionEnter(Object& other) override {
    }
};


