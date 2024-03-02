# 3D Graphics Engine

## Overview

This 3D graphics engine is designed to render 3D models and textures in a console environment. It leverages the `olcConsoleGameEngine`, providing a unique approach to 3D rendering in a non-traditional medium.

## Features

- **3D Model Rendering**: Render 3D objects within a console interface.
- **Texture Mapping**: Apply textures to 3D models for enhanced visuals.
- **Camera Control**: Basic camera movements and rotations for dynamic viewing.

## Getting Started

### Prerequisites

- C++ compiler
- `olcConsoleGameEngine` - Ensure this is downloaded or cloned from its repository.

### Installation

1. Clone or download this repository.
2. Compile and execute the application.

## Usage

### Loading Models

Use `mesh::LoadFromObjectFile` to load 3D models from .obj files into the engine.

### Camera Controls

- **Movement**: Utilize arrow keys for moving the camera.
- **Rotation**: Use 'W', 'A', 'S', 'D' keys to rotate the camera.

## Code Structure

### Key Components

- **vec2d, vec3d**: Vector structures for 2D and 3D coordinate representation.
- **triangle**: Represents a 3D triangle, essential for 3D model construction.
- **mesh**: Manages 3D model data including vertices and texture information.
- **mat4x4**: A 4x4 matrix for handling various transformations.
- **olcEngine3D**: Extends `olcConsoleGameEngine`, central to the rendering process.

### Notable Methods

- **Matrix and Vector Operations**: Functions like `Matrix_MultiplyVector`, `Vector_Add` for mathematical computations.
- **Rendering Logic**: The `OnUserUpdate` method is where the core rendering logic resides.
