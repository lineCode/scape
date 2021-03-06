#ifndef EXPORTIMAGEDIALOG_H
#define EXPORTIMAGEDIALOG_H

#include "ImageFileDialog.h"

class ExportImageDialog : public ImageFileDialog
{
    Q_OBJECT

public:
    ExportImageDialog(QWidget* parent = NULL);
    virtual ~ExportImageDialog();

    virtual void populate(const FormatItemVector& formatItemVector);

protected:
    virtual void selectFileButtonClicked();

private:
    void setupDialog();
};

#endif // EXPORTIMAGEDIALOG_H
