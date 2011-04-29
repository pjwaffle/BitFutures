#ifndef FEEDMANAGER_H
#define FEEDMANAGER_H

#include <QString>

class FeedManager
{
public:
    FeedManager();
    int DownloadFeed(QString aFeedUrl);
    bool CheckCachedFeed(QString aFeedFileName);
    void ExpireFeed(QString aFeedFileName);
};

#endif // FEEDMANAGER_H
