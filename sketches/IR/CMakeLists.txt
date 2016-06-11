add_executable_avr(IR IR.cpp)
# we require a number of arduino libraries for this
# (they already depend on arduino-core, so we don't need it here)
# install these libraries and either copy them or create a link in the 'external' directory
#target_link_libraries(fewl)

# special external dependencies can be added like this and will be downloaded once
# arguments: <target> <name> <git url>
target_sketch_library(IR Arduino-IRremote "https://github.com/amitesh-singh/Arduino-IRremote")
