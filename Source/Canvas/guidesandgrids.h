#ifndef GUIDESANDGRIDS_H
#define GUIDESANDGRIDS_H
#include "Canvas/graphicsscene.h"

class GraphicsScene;
class GuidesAndGrids : public QGraphicsItem
{
public:
    GuidesAndGrids(GraphicsScene *_scene);
    GraphicsScene *scene;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0);
    QRectF boundingRect() const;
};

#endif // GUIDESANDGRIDS_H
