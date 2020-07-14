cmake_minimum_required(VERSION 3.16)
project(project_Automat)

set(CMAKE_CXX_STANDARD 20)

add_executable(project_Automat main.cpp DeterminateFiniteAutomaton.cpp DeterminateFiniteAutomaton.h DeterminateFiniteAutomatonInt.cpp DeterminateFiniteAutomatonInt.h AutomatonException.cpp AutomatonException.h State.cpp State.h Alphabet.cpp Alphabet.h)