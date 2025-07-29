# 🧠 Algorithm Visualizer (React + Flask + C++)

A full-stack algorithm visualizer project using:
- React (frontend UI)
- Flask (backend API)
- C++ (compiled binaries for core algorithm logic)

## 🔧 Project Structure

algorithm-visualizer/

├── .gitignore

├── README.md

├── cpp-algorithms/

├── backend/

└── frontend/

## 📥 How It Works

1. Frontend sends array or graph input to backend
2. Backend runs the corresponding C++ binary
3. Output is parsed and sent back to frontend
4. UI displays the result (animated later)

## 🚀 How to Run

### 1. Compile C++ binaries:
```bash
cd cpp-algorithms
g++ linear_search.cpp -o ../backend/binaries/linear_search
```

### 2. Start Flask server:
```bash
cd backend
pip install -r requirements.txt
python app.py
```

### 3. Start React frontend:
```bash
cd frontend
npm install
npm start
```

### ✅ Status
[x] Project structure defined

[ ] All 18 Sorting/Search Algorithms

[ ] Backend Integration

[ ] Frontend Visualization

[ ] Hosting on GitHub + Vercel + Render


---

## 🔁 Action Steps

1. Create `.gitignore` and `README.md` at project root
2. Add, commit, and push to GitHub:
```bash
git add .gitignore README.md
git commit -m "Add .gitignore and README.md"
git push
```

