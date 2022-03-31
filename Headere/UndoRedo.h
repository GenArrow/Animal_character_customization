#pragma once
#include "Entitate.h"

using namespace std;

class UndoRedo {
public:
    static void clearfile(string& filename) {
        ofstream fclear(filename);
        fclear.close();
    }

    static void write_after_clear(string &filename, string &line) {
        fstream file(filename);
        file << line;
        file.close();
    }

    static void WriteToUndoFromFile(string &undofile, string &file) {

        fstream uFile(undofile);
        fstream dFile(file);
        string line, line1;

        getline(uFile, line1);
        getline(dFile, line);
        line1 += line + "|";
        clearfile(undofile);
        uFile.close();
        write_after_clear(undofile, line1);

        dFile.close();
    }

    static void CopyToRedoFromUndo(string &redofile, string &undofile) {

        fstream uFile(undofile);
        fstream rFile(redofile);
        string line;

        getline(uFile, line);
        clearfile(redofile);
        rFile.close();
        uFile.close();
        write_after_clear(redofile, line);
    }

    static void UndoFileWriter() {
        string s1 = "undo_pisici.csv", s2 = "pisici.csv", s3 = "undo_caini.csv", s4 = "caini.csv";
        WriteToUndoFromFile(s1, s2);
        WriteToUndoFromFile(s3, s4);
    }

    static void RedoFileCopy() {
        string s1 = "redo_pisici.csv", s2 = "undo_pisici.csv", s3 = "redo_caini.csv", s4 = "undo_caini.csv";
        CopyToRedoFromUndo(s1, s2);
        CopyToRedoFromUndo(s3, s4);
    }

    static void fileinit() {
        string s1 = "redo_pisici.csv", s2 = "undo_pisici.csv", s3 = "redo_caini.csv", s4 = "undo_caini.csv";
        clearfile(s1);
        clearfile(s2);
        clearfile(s3);
        clearfile(s4);
        UndoFileWriter();
        RedoFileCopy();
    }

    static vector<string> splitter(const string &str, const string &delim) {
        vector<string> tokens;
        size_t prev = 0, pos;
        do {
            pos = str.find(delim, prev);
            if (pos == string::npos) pos = str.length();
            string token = str.substr(prev, pos - prev);
            if (!token.empty()) tokens.push_back(token);
            prev = pos + delim.length();
        } while (pos < str.length() && prev < str.length());
        return tokens;
    }

    static void undo() {

        string lineD, lineT, s1, s2, line, line1, c1 = "pisici.csv", c2 = "caini.csv", c3 = "undo_pisici.csv", c4 = "undo_caini.csv";
        fstream uFileT(c4);
        fstream uFileD(c3);
        getline(uFileD, lineD);
        getline(uFileT, lineT);

        vector<string> D = splitter(lineD, "|");
        vector<string> T = splitter(lineT, "|");

        if (D.size() == 1) {
            uFileD.close();
            uFileT.close();
            throw(Exceptie("Nothing left to undo"));
        }
        else {
            fstream Dr(c1);
            fstream Tr(c2);

            D.pop_back();
            T.pop_back();
            s1 = D.back();
            s2 = T.back();

            clearfile(c1);
            Dr.close();
            write_after_clear(c1, s1);
            clearfile(c2);
            Tr.close();
            write_after_clear(c2, s2);

            for (const auto &st:D) {
                line += st + "|";
            }
            clearfile(c3);
            uFileD.close();
            write_after_clear(c3, line);

            for (const auto &st1:T) {
                line1 += st1 + "|";
            }
            clearfile(c4);
            uFileT.close();
            write_after_clear(c4, line1);
        }
    }


    static void redo() {

        string lineRD, lineUD, lineRT, lineUT, line, line1;
        string c1 = "pisici.csv", c2 = "caini.csv", c3 = "undo_pisici.csv", c4 = "undo_caini.csv", c5 = "redo_pisici.csv", c6 = "redo_caini.csv";
        fstream rFileD(c5);
        fstream rFileT(c6);
        fstream uFileD(c3);
        fstream uFileT(c4);
        fstream Dr(c1);
        fstream Tr(c2);

        getline(rFileD, lineRD);
        getline(uFileD, lineUD);
        getline(rFileT, lineRT);
        getline(uFileT, lineUT);

        vector<string> RD = splitter(lineRD, "|");
        vector<string> UD = splitter(lineUD, "|");
        vector<string> RT = splitter(lineRT, "|");
        vector<string> UT = splitter(lineUT, "|");

        if (RD.size() == UD.size()) {
            rFileD.close();
            rFileT.close();
            uFileD.close();
            uFileT.close();
            Dr.close();
            Tr.close();
            throw(Exceptie("Nothing left to redo"));
        }
        else {
            UD.push_back(RD[UD.size()]);
            UT.push_back(RT[UT.size()]);

            for (const auto &st:UD) {
                line += st + "|";
            }
            clearfile(c3);
            uFileD.close();
            write_after_clear(c3, line);

            for (const auto &st1:UT) {
                line1 += st1 + "|";
            }
            clearfile(c4);
            uFileT.close();
            write_after_clear(c4, line1);

            clearfile(c1);
            Dr.close();
            write_after_clear(c1, UD.back());

            clearfile(c2);
            Tr.close();
            write_after_clear(c2, UT.back());
        }
    }
};