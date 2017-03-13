#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>

class Matrix
{
    public:
        /** Default constructor */
        Matrix();
        /** Default destructor */
        virtual ~Matrix();

    protected:
        float _matrix[3*3];

    private:
};

#endif // MATRIX_H