#include "lane.hpp"

#include <filesystem>

// private

void Lane::parseFile(std::string fileName)
{

}

void Lane::parseLaneName(std::string laneName) {
    std::string fileExtension = std::filesystem::path(fileName).extension();
    std::size_t foundExtensionIndex = fileName.find(fileExtension);

    if (foundExtensionIndex != std::string::npos) {
        fileName.erase(foundExtensionIndex);
    }

    laneName_ = fileName;
}

// public

Lane::Lane(std::string fileName)
{
    parseFile(fileName);
    parseLaneName(fileName);
}

Lane::~Lane() {}

std::string Lane::getLaneName()
{
    return laneName_;
}
