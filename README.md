# C Program CI/CD with Docker

This project demonstrates a simple C program that is containerized using Docker and automatically built, tested, and pushed to Docker Hub using GitHub Actions.

## Project Files
- **`main.c`**: A basic C program with a simple `add` function and tests.
- **`Dockerfile`**: Docker configuration to build and run the C program.
- **`.github/workflows/cicd.yaml`**: GitHub Actions workflow for CI/CD.

## Docker Commands
1. **Build the Docker image**:
   ```bash
   docker build -t <your-docker-username>/c-program:latest .
Run the Docker container:


docker run --rm <your-docker-username>/c-program:latest
Expected Output:


Hello World
All tests passed!
CI/CD Pipeline with GitHub Actions
The pipeline performs the following steps:

Builds the Docker image.
Runs the tests inside the Docker container.
Pushes the image to Docker Hub.
Setting Up GitHub Secrets
Go to your GitHub repository settings.
Add the following secrets:
DOCKER_USERNAME: Your Docker Hub username.
DOCKER_PASSWORD: Your Docker Hub password or token.
Usage
Push code to the main branch or create a pull request.
The GitHub Actions workflow will build, test, and push the Docker image to Docker Hub.
Docker Hub Repository
Find your image at:


https://hub.docker.com/r/<your-docker-username>/c-program
