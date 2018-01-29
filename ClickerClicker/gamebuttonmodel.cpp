#include "gamebuttonmodel.h"

#include <QDebug>

GameButtonModel::GameButtonModel(QObject *parent) :
    QObject(parent),
    m_currentScore(0),
    m_initialScore(0),
    m_amount(0),
    m_cost(0)
{
    /*
     * NOTE: Never reach into QML
     */
}

int GameButtonModel::getCurrentScore()
{
    return m_currentScore;
}

int GameButtonModel::getInitialScore()
{
    return m_initialScore;
}

int GameButtonModel::getAmount()
{
    return m_amount;
}

int GameButtonModel::getCost()
{
    return m_cost;
}

void GameButtonModel::setCurrentScore(int score)
{
    if(m_currentScore != score)
    {
        m_currentScore = score;
    }

    qInfo() << "This is the current score : " <<  this->getCurrentScore();

    emit this->currentScoreChanged(m_currentScore);
}

void GameButtonModel::setInitialScore(int initialScore)
{
    if(m_initialScore != initialScore)
    {
        m_initialScore = initialScore;
    }

    qInfo() << "This is the initial score : " << this->getInitialScore();

    emit this->initialScoreChanged(m_initialScore);
}

void GameButtonModel::setAmount(int amount)
{
    if(m_amount != 0)
    {
        m_amount += amount;
    }

    qInfo() << "This is the amount : " << this->getAmount();

    emit this->amountChanged(m_amount);
}

void GameButtonModel::setCost(int cost)
{
    if(m_cost != cost)
    {
        m_cost = cost;
    }

    qInfo() << "This is the cost : " << this->getCost();

    emit this->costChanged(m_cost);
}
