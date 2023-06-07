#include "VideoCard.h"

VideoCard :: VideoCard(string makeVideoCard, string modelVideoCard, string graphicFamily, uint16_t internalVideoMemory,
        string memoryType, uint16_t memoryBits,  uint16_t ventilatorsCount)
    {
        this->makeVideoCard = makeVideoCard;
        this->modelVideoCard = modelVideoCard;
        this->graphicFamily = graphicFamily;
        this->internalVideoMemory = internalVideoMemory;
        this->memoryType = memoryType;
        this->memoryBits = memoryBits;
        this->ventilatorsCount = ventilatorsCount;
    }

void VideoCard :: videoCardInfo() const{
    cout << "Video card" << endl;
    cout << "Video card make: " << makeVideoCard << endl
         << "Video card model: " << modelVideoCard << endl
         << "Video card graphic family: " << graphicFamily << endl
         << "Internal video memory: " << internalVideoMemory << endl
         << "Memory type: " << memoryType << endl
         << "Video card memory bits: " << memoryBits << endl
         << "Number of ventilators: " << ventilatorsCount << endl;
}

