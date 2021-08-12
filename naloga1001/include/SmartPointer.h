#pragma once


template <typename T>
class SmartPointer {
    private:
        T* object = nullptr;

    public:
        SmartPointer(T* object) : object(object) { }
        ~SmartPointer() { 
            if (object) delete object; 
        }

        T& operator*()  const { return *object; }
        T* operator->() const { return object; }
};


