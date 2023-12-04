// whattotest.cpp

#include "whattotest.h"
 
WidgetWithArrays::WidgetWithArrays() : m_count(0)
{
    for (int i =0 ; i < 100; i++) 
    {
        m_array[i] = 0;
    }
}

 
void WidgetWithArrays::storeInteger(int a)
{
    //TODO:
    if (m_count < 2){ //not <= 2 bacause of how indexing in arrays work
        m_array[m_count] = a;// integers are stored in the array
        m_count ++;
    }
    
}

int WidgetWithArrays::sum()
{
    int retVal = 0;

    for(int i=0;i< m_count;i++){ //changed from 100 to m_count so we can access elements stored in the array
        retVal += m_array[i];
    }
    
    // hint standard for loop OR
    // try looking into range based for loop (hint it can work with dumb arrays)
    
    return retVal;
}
 

WidgetWithVector::WidgetWithVector()
{

}

void WidgetWithVector::storeInteger(int a)
{
    m_vector.push_back(a);

}

int WidgetWithVector::sum()
{
    int retVal = 0;
    
    for(int n : m_vector)
    {
        retVal = retVal +n;
    }
    
    return retVal;
}
 


