# 🚀 SoftprInnovation — Full-Scale E-Commerce Website

**Tech Stack:** MERN (MongoDB, Express, React, Node.js) + JWT + Bootstrap 5 + Custom CSS

---

## 📁 Project Structure

```
ecommerce/
├── backend/              ← Node.js + Express API
│   ├── config/
│   │   └── db.js         ← MongoDB connection
│   ├── middleware/
│   │   ├── auth.js       ← JWT userAuth + adminAuth middleware
│   │   └── upload.js     ← Multer image upload config
│   ├── models/
│   │   ├── User.js       ← User model (bcrypt hashing)
│   │   ├── Admin.js      ← Admin model (bcrypt hashing)
│   │   ├── Category.js   ← Category model
│   │   ├── Product.js    ← Product model (with reviews)
│   │   └── Order.js      ← Order model (full lifecycle)
│   ├── routes/
│   │   ├── userRoute.js    ← Register, Login, Profile
│   │   ├── adminRoute.js   ← Admin Register, Login
│   │   ├── categoryRoute.js← Full CRUD for categories
│   │   ├── productRoute.js ← Full CRUD + Search + Filter + Review
│   │   └── orderRoute.js   ← Place, Track, Manage orders
│   ├── uploads/          ← Auto-created on file upload
│   ├── .env              ← Environment variables (DO NOT COMMIT)
│   ├── index.js          ← Main server entry point
│   └── package.json
│
└── frontend/             ← React + Vite
    ├── src/
    │   ├── assets/css/
    │   │   └── global.css        ← CSS variables, utility classes
    │   ├── components/
    │   │   ├── Navbar.jsx         ← Fixed navbar with cart badge, auth state
    │   │   └── ProductCard.jsx    ← Reusable product card with add-to-cart
    │   ├── context/
    │   │   └── AuthContext.jsx    ← Global auth + cart state (Context API)
    │   ├── pages/
    │   │   ├── user/
    │   │   │   ├── Home.jsx          ← Full hero, categories, products, footer
    │   │   │   ├── UserLogin.jsx     ← Login + Register tabs
    │   │   │   ├── UserDashboard.jsx ← User orders, profile
    │   │   │   ├── ProductsPage.jsx  ← Products list + search + filter
    │   │   │   ├── ProductDetail.jsx ← Single product with add to cart
    │   │   │   ├── CartPage.jsx      ← Cart with qty controls
    │   │   │   ├── CheckoutPage.jsx  ← Shipping + payment + place order
    │   │   │   ├── OrdersPage.jsx    ← User order history
    │   │   │   └── AboutPage.jsx     ← About + Contact pages
    │   │   └── admin/
    │   │       ├── AdminAuth.jsx              ← Admin Login/Register
    │   │       ├── layout/
    │   │       │   ├── AdminLayout.jsx        ← Sidebar + topbar layout
    │   │       │   └── AdminHome.jsx          ← Dashboard with live stats
    │   │       ├── category/
    │   │       │   ├── Category.jsx           ← Category table with CRUD
    │   │       │   └── AddCategory.jsx        ← Add/Edit category form
    │   │       ├── products/
    │   │       │   ├── Products.jsx           ← Products table with CRUD
    │   │       │   └── AddProduct.jsx         ← Add/Edit product form
    │   │       ├── orders/
    │   │       │   └── Orders.jsx             ← Order management
    │   │       └── users/
    │   │           └── Users.jsx              ← User list
    │   ├── utils/
    │   │   └── api.js            ← Axios instance with interceptors
    │   ├── App.jsx               ← Router with protected routes
    │   └── main.jsx              ← Entry point
    ├── index.html
    ├── vite.config.js
    └── package.json
```

---

## 🛠️ Setup Instructions

### 1. Prerequisites
- Node.js v18+
- MongoDB (local or Atlas)
- npm or yarn

### 2. Backend Setup
```bash
cd backend
npm install
# Edit .env file with your values
npm run dev      # development
npm start        # production
```

### 3. Frontend Setup
```bash
cd frontend
npm install
npm run dev      # starts at http://localhost:5173
npm run build    # production build
```

### 4. Environment Variables (backend/.env)
```env
PORT=5000
MONGO_URI=mongodb://127.0.0.1:27017/softprinnovation
JWT_SECRET=your_super_secret_key_here_change_this
JWT_EXPIRES_IN=7d
ADMIN_JWT_EXPIRES_IN=30d
FRONTEND_URL=http://localhost:5173
NODE_ENV=development
```

---

## 🔐 Authentication Flow

| Role  | Token Storage      | Cookie       | Expiry |
|-------|--------------------|--------------|--------|
| User  | localStorage + Cookie | userToken  | 7 days |
| Admin | localStorage + Cookie | adminToken | 30 days |

- Passwords hashed with **bcrypt (rounds: 12)**
- JWT signed with `JWT_SECRET`
- Protected routes via middleware (`userAuth`, `adminAuth`)
- Axios interceptor auto-attaches token to all requests
- 401 response → auto clears tokens

---

## 🌐 API Endpoints

### User
| Method | Endpoint              | Auth    | Description          |
|--------|-----------------------|---------|----------------------|
| POST   | /api/user/register    | Public  | Register user        |
| POST   | /api/user/login       | Public  | Login user           |
| POST   | /api/user/logout      | Public  | Clear cookie         |
| GET    | /api/user/profile     | User    | Get profile          |
| PUT    | /api/user/profile     | User    | Update profile       |
| GET    | /api/user/all         | Public  | List all users (admin view) |

### Admin
| Method | Endpoint              | Auth    | Description          |
|--------|-----------------------|---------|----------------------|
| POST   | /api/admin/register   | Public  | Register admin       |
| POST   | /api/admin/login      | Public  | Login admin          |
| POST   | /api/admin/logout     | Public  | Clear cookie         |
| GET    | /api/admin/profile    | Admin   | Get admin profile    |

### Category
| Method | Endpoint              | Auth    | Description          |
|--------|-----------------------|---------|----------------------|
| GET    | /api/category         | Public  | All categories       |
| GET    | /api/category/:id     | Public  | Single category      |
| POST   | /api/category         | Admin   | Add category + image |
| PUT    | /api/category/:id     | Admin   | Update category      |
| DELETE | /api/category/:id     | Admin   | Soft delete          |

### Product
| Method | Endpoint                  | Auth    | Description              |
|--------|---------------------------|---------|--------------------------|
| GET    | /api/product              | Public  | List + search + filter   |
| GET    | /api/product/featured     | Public  | Featured products        |
| GET    | /api/product/:id          | Public  | Single product           |
| POST   | /api/product              | Admin   | Add product + images     |
| PUT    | /api/product/:id          | Admin   | Update product           |
| DELETE | /api/product/:id          | Admin   | Soft delete              |
| POST   | /api/product/:id/review   | User    | Add review               |

### Order
| Method | Endpoint                      | Auth    | Description           |
|--------|-------------------------------|---------|-----------------------|
| POST   | /api/order                    | User    | Place order           |
| GET    | /api/order/my                 | User    | My orders             |
| GET    | /api/order/:id                | User    | Single order          |
| GET    | /api/order/admin/all          | Admin   | All orders            |
| GET    | /api/order/admin/stats        | Admin   | Dashboard stats       |
| PUT    | /api/order/admin/:id/status   | Admin   | Update order status   |

---

## 🎨 Frontend Features

### User-Facing
- ✅ **Home Page** — Animated hero slider, ticker, categories, products, features, CTA, testimonials, contact, footer
- ✅ **Products Page** — Search, category filter, tag filter, sort, pagination
- ✅ **Product Detail** — Images, add to cart with qty, reviews, specs tabs
- ✅ **Cart** — LocalStorage persistence, qty controls, price summary
- ✅ **Checkout** — Shipping address form, COD/Online payment selection
- ✅ **Orders** — Order history with status tracking
- ✅ **User Dashboard** — Stats, recent orders, profile edit
- ✅ **Login/Register** — Tab-based toggle, JWT, cookies, localStorage

### Admin Panel
- ✅ **Dashboard** — Live stats (orders, revenue, products, users, categories)
- ✅ **Category CRUD** — Add/Edit/Delete with image upload
- ✅ **Product CRUD** — Add/Edit/Delete, multi-image upload, all fields
- ✅ **Order Management** — View all orders, update status (placed → delivered)
- ✅ **User Management** — View all registered users

### Tech Highlights
- 🎨 **Design** — Cyberpunk/tech theme, Orbitron + Exo 2 fonts, CSS custom properties
- 📱 **Responsive** — Bootstrap 5 grid + custom breakpoints, hamburger menu
- 🔄 **Animations** — Hero slider, particle effects, grid overlay, hover transforms
- 🛒 **Cart** — localStorage persistence, live badge count, global Context API
- 🔔 **Toasts** — react-toastify for all feedback (success/error)
- ⚡ **Performance** — Lazy image loading, skeleton loaders, code splitting

---

## 🚀 Deployment Guide

### Backend Deployment (Render / Railway / EC2)
```bash
# Set environment variables on platform:
NODE_ENV=production
MONGO_URI=mongodb+srv://user:pass@cluster.mongodb.net/softprinnovation
JWT_SECRET=<very-long-random-string>
FRONTEND_URL=https://yourdomain.com
PORT=5000
```

### Frontend Deployment (Vercel / Netlify)
```bash
cd frontend
npm run build
# Upload /dist folder
# Set environment variable:
VITE_API_URL=https://your-backend-url.com
```

**Update api.js:**
```js
const API_BASE = import.meta.env.VITE_API_URL || 'http://localhost:5000'
```

### Database (MongoDB Atlas)
1. Create cluster at mongodb.com
2. Get connection string
3. Replace `MONGO_URI` in backend `.env`
4. Whitelist IP: `0.0.0.0/0` for production

### Image Storage (Production)
For production, replace local `multer` storage with **Cloudinary** or **AWS S3**:
```bash
npm install cloudinary multer-storage-cloudinary
```

---

## 🐛 Known Notes & Tips

1. **Admin route conflict** — `/admin` is used for both AdminAuth page and AdminLayout. This is handled by React Router's route matching — the layout route only activates for nested paths like `/admin/home`, `/admin/products`, etc.

2. **Product images** — Backend accepts up to 5 images per product. In edit mode, uploading new images replaces old ones.

3. **Attributes field** — Must be valid JSON string. Example: `{"RAM":"8GB","CPU":"BCM2712"}`

4. **Free delivery** — Automatically applied in cart when order total ≥ ₹999

5. **Stock auto-update** — When an order is placed, stock is automatically reduced. If stock reaches 0, `stockStatus` is set to `outOfStock`.

6. **Rate Limiting** — Backend has 200 requests per 15 minutes per IP. Adjust in `index.js` for production.

---

## 📦 Key npm Packages

### Backend
| Package | Purpose |
|---------|---------|
| express | Web framework |
| mongoose | MongoDB ODM |
| bcrypt | Password hashing |
| jsonwebtoken | JWT auth |
| multer | File upload |
| cors | Cross-origin requests |
| helmet | Security headers |
| express-rate-limit | Rate limiting |
| cookie-parser | Cookie handling |
| morgan | Request logging |

### Frontend
| Package | Purpose |
|---------|---------|
| react | UI library |
| react-router-dom | Client-side routing |
| axios | HTTP requests |
| bootstrap | CSS framework |
| react-toastify | Toast notifications |
| react-icons | Icon library |
| vite | Build tool |

---

## 🎯 What's Dynamic

Everything is connected to the backend:
- 🏠 **Home categories** → fetched from `/api/category`
- 🏠 **Home products** → fetched from `/api/product?limit=8`
- 🛍 **Products page** → full search, filter, sort, pagination from API
- 🛒 **Cart** → localStorage (persists across browser sessions)
- 📦 **Orders** → placed via API, stock auto-deducted
- 📊 **Admin dashboard stats** → live from `/api/order/admin/stats`
- 👥 **Admin users list** → from `/api/user/all`

---

Made with ❤️ for SoftprInnovation — India's Premier Electronics Hub 🇮🇳
