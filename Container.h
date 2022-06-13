#pragma once
#include <iostream>

template <typename T>
class Container
{
private:
    T **elements;
    size_t size, capacity;

    void free();
    void copyFrom(const Container<T> &);

    void resize();

public:
    Container();
    Container(size_t);
    Container(const Container<T> &);
    Container &operator=(const Container<T>);
    ~Container();

    bool setAt(size_t, const T &);

    void print() const;

    void addElemenet(const T &);
    bool removeElement(size_t);

    size_t getCount() const;
    bool isEmpty() const;

    T *&operator[](size_t);
    const T *operator[](size_t) const;
};

template <typename T>
void Container<T>::free()
{
    for (int i = 0; i < size; i++)
    {
        delete elements[i];
    }
    delete[] elements;
}

template <typename T>
void Container<T>::resize()
{
    T **newCollection = new T *[capacity *= 2];
    for (int i = 0; i < size; i++)
    {
        newCollection[i] = elements[i];
    }
    delete[] elements;
    elements = newCollection;
}

template <typename T>
void Container<T>::copyFrom(const Container<T> &other)
{
    this->size = other.size;
    this->capacity = other.capacity;

    elements = new T *[capacity];

    for (int i = 0; i < capacity; i++)
    {
        elements[i] = other.elements[i]->clone();
    }
}

template <typename T>
Container<T>::Container()
{
    size = 0;
    capacity = 4;
    elements = new T *[capacity];
}

template <typename T>
Container<T>::Container(size_t capacity)
{
    elements = new T *[capacity];
    this->size = 0;
    this->capacity = capacity;
}

template <typename T>
Container<T>::Container(const Container<T> &other)
{
    copyFrom(other);
}

template <typename T>
Container<T> &Container<T>::operator=(const Container<T> other)
{
    if (this != &other)
    {
        free();
        copyFrom(other);
    }
    return *this;
}

template <typename T>
Container<T>::~Container()
{
    free();
}

template <typename T>
bool Container<T>::setAt(size_t index, const T &elem)
{
    if (index >= size || index < 0)
    {
        return false;
    }
    // elements[index] = elem;
    return true;
}

template <typename T>
void Container<T>::addElemenet(const T &elem)
{
    if (size == capacity)
    {
        resize();
    }
    elements[size++] = elem.clone();
}

template <typename T>
bool Container<T>::removeElement(size_t index)
{
    if (index >= size || index < 0)
    {
        return false;
    }
    T *temp = elements[index];
    elements[index] = elements[size - 1];
    elements[size - 1] = temp;

    delete elements[size - 1];
    size--;

    return true;
}

template <typename T>
void Container<T>::print() const
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *elements[i] << "\n";
    }
}

template <typename T>
size_t Container<T>::getCount() const
{
    return size;
}

template <typename T>
bool Container<T>::isEmpty() const
{
    return size == 0;
}

template <typename T>
T *&Container<T>::operator[](size_t index)
{
    if (index >= size)
    {
        // return new T();
    }
    return elements[index];
}

template <typename T>
const T *Container<T>::operator[](size_t index) const
{
    if (index >= size)
    {
        // return new T();
    }
    return elements[index];
}