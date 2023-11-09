CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

# Nome do projeto
PROJECT(SeuProjeto)

SET(CMAKE_C_STANDARD 99)
SET(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adiciona as atividades
ADD_SUBDIRECTORY(activity-1)
ADD_SUBDIRECTORY(activity-2)
ADD_SUBDIRECTORY(activity-3)

# Baixa dependências externas
INCLUDE(FetchContent)

FetchContent_Declare(
  googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG        v1.14.0
)
SET(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)