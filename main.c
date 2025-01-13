#include <GL/glut.h> // Include the GLUT header

// Function to initialize OpenGL
void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set the background color to black
}

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glBegin(GL_TRIANGLES);        // Start drawing a triangle

    // Vertex 1: Bottom-left, red
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.5f, -0.5f);

    // Vertex 2: Top, green
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.0f, 0.5f);

    // Vertex 3: Bottom-right, blue
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.5f, -0.5f);

    glEnd(); // End drawing the triangle
    glFlush(); // Ensure all OpenGL commands are executed
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);                  // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE);      // Use single buffering
    glutInitWindowSize(800, 600);          // Set the window size
    glutCreateWindow("Multicolored Triangle"); // Create the window
    glutDisplayFunc(display);              // Register the display callback
    initGL();                              // Initialize OpenGL
    glutMainLoop();                        // Enter the event loop
    return 0;
}