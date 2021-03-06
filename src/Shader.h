 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Shader.h
 * Author: Bérenger Dalle-Cort <contact@dalle-cort.fr>
 *
 * Created on 1 juillet 2016, 19:14
 */
#pragma once

#include <iostream>
#include <cstdlib>
#include <GL/glew.h>
#include <string>

namespace brd{
    class Shader {
    public:
        static Shader* CreateVsFs(const std::string& fileName);
        Shader();
        Shader(const Shader& orig);
        virtual ~Shader();
        GLuint getProgram();
        GLint getAttributeCoord3D();
        std::string loadFile(const std::string& fileName);
        bool compile(const std::string& shaderFilePath);

    private:
        GLuint vertexShader;
        GLuint fragmentShader;
        GLuint program;
        GLint attribute_coord3d;

        bool bindAttributes();
        bool compileVs(const std::string& vs_source);
        bool compileFs(const std::string& vs_source);
        bool linkProgram();

    };
}